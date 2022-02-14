
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sky2_hw {TYPE_2__** dev; TYPE_1__* pdev; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (struct sky2_hw*,unsigned int,int ) ;
 int FUNC_5 (struct sky2_hw*,unsigned int,int ,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct sky2_hw *VAR_7, unsigned VAR_8, u16 VAR_9, u16 VAR_10)
{
 int VAR_11;

 FUNC_5(VAR_7, VAR_8, VAR_4, VAR_10);
 FUNC_5(VAR_7, VAR_8, VAR_2,
      FUNC_0(VAR_5) | FUNC_1(VAR_9));

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  u16 VAR_12 = FUNC_4(VAR_7, VAR_8, VAR_2);
  if (VAR_12 == 0xffff)
   goto io_error;

  if (!(VAR_12 & VAR_3))
   return 0;

  FUNC_6(10);
 }

 FUNC_3(&VAR_7->pdev->dev, "%s: phy write timeout\n", VAR_7->dev[VAR_8]->name);
 return -VAR_1;

io_error:
 FUNC_2(&VAR_7->pdev->dev, "%s: phy I/O error\n", VAR_7->dev[VAR_8]->name);
 return -VAR_0;
}
