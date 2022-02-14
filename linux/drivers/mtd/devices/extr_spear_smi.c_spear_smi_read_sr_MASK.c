
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spear_smi {int status; int lock; scalar_t__ io_base; int cmd_complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct spear_smi *VAR_10, u32 VAR_11)
{
 int VAR_12;
 u32 VAR_13;

 FUNC_0(&VAR_10->lock);
 VAR_10->status = 0;

 VAR_13 = FUNC_2(VAR_10->io_base + VAR_4);

 FUNC_4(VAR_13 & ~(VAR_6 | VAR_9), VAR_10->io_base + VAR_4);


 FUNC_4((VAR_11 << VAR_0) | VAR_2 | VAR_8,
   VAR_10->io_base + VAR_5);


 VAR_12 = FUNC_3(VAR_10->cmd_complete,
   VAR_10->status & VAR_7, VAR_3);


 if (VAR_12 > 0)
  VAR_12 = VAR_10->status & 0xffff;
 else if (VAR_12 == 0)
  VAR_12 = -VAR_1;


 FUNC_4(VAR_13, VAR_10->io_base + VAR_4);
 FUNC_4(0, VAR_10->io_base + VAR_5);
 FUNC_1(&VAR_10->lock);

 return VAR_12;
}
