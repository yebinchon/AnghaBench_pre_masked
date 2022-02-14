
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whcrc {scalar_t__ rc_base; int event_work; struct umc_dev* umc_dev; } ;
struct uwb_rc {struct whcrc* priv; } ;
struct umc_dev {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__,int ,int ,int,char*) ;

__attribute__((used)) static
void FUNC_3(struct uwb_rc *VAR_4)
{
 struct whcrc *VAR_5 = VAR_4->priv;
 struct umc_dev *VAR_6 = VAR_5->umc_dev;

 FUNC_1(0, VAR_5->rc_base + VAR_1);
 FUNC_0(&VAR_5->event_work);

 FUNC_1(0, VAR_5->rc_base + VAR_0);
 FUNC_2(&VAR_6->dev, VAR_5->rc_base + VAR_2,
        VAR_3, VAR_3, 100, "radio controller stop");
}
