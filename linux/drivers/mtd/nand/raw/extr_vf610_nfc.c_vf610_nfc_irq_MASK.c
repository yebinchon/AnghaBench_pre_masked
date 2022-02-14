
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf610_nfc {int cmd_done; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vf610_nfc*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct vf610_nfc *VAR_5 = VAR_4;

 FUNC_1(VAR_5, VAR_2, VAR_0);
 FUNC_0(&VAR_5->cmd_done);

 return VAR_1;
}
