
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int poll_sem; int comm_toggle; } ;
struct mlx4_priv {TYPE_1__ cmd; } ;
struct mlx4_dev {int persist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_3 (struct mlx4_dev*,int ,int ) ;
 int FUNC_4 (int ) ;
 struct mlx4_priv* FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mlx4_dev*,char*,int ,...) ;
 unsigned long FUNC_8 (unsigned long) ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct mlx4_dev *VAR_5, u8 VAR_6, u16 VAR_7,
         unsigned long VAR_8)
{
 struct mlx4_priv *VAR_9 = FUNC_5(VAR_5);
 unsigned long VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;


 if (FUNC_0(VAR_5)) {
  FUNC_7(VAR_5, "Communication channel is not idle - my toggle is %d (cmd:0x%x)\n",
     VAR_9->cmd.comm_toggle, VAR_6);
  return -VAR_1;
 }


 FUNC_2(&VAR_9->cmd.poll_sem);
 if (FUNC_3(VAR_5, VAR_6, VAR_7)) {



  VAR_11 = FUNC_6(VAR_0);
  goto out;
 }

 VAR_10 = FUNC_8(VAR_8) + VAR_4;
 while (FUNC_0(VAR_5) && FUNC_9(VAR_4, VAR_10))
  FUNC_1();
 VAR_12 = FUNC_0(VAR_5);
 if (VAR_12) {



  if (VAR_2 == VAR_6) {
   VAR_11 = VAR_3;
   goto out;
  } else {
   FUNC_7(VAR_5, "Communication channel command 0x%x timed out\n",
      VAR_6);
   VAR_11 = FUNC_6(VAR_0);
  }
 }

 if (VAR_11)
  FUNC_4(VAR_5->persist);
out:
 FUNC_10(&VAR_9->cmd.poll_sem);
 return VAR_11;
}
