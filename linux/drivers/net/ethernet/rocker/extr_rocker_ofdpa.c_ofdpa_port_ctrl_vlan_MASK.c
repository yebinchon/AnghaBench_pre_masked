
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofdpa_port {int dummy; } ;
struct ofdpa_ctrl {scalar_t__ term; scalar_t__ bridge; scalar_t__ acl; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (struct ofdpa_port*,int,struct ofdpa_ctrl const*,int ) ;
 int FUNC_1 (struct ofdpa_port*,int,struct ofdpa_ctrl const*,int ) ;
 int FUNC_2 (struct ofdpa_port*,int,struct ofdpa_ctrl const*,int ) ;

__attribute__((used)) static int FUNC_3(struct ofdpa_port *VAR_1, int VAR_2,
    const struct ofdpa_ctrl *VAR_3, __be16 VAR_4)
{
 if (VAR_3->acl)
  return FUNC_0(VAR_1, VAR_2,
      VAR_3, VAR_4);
 if (VAR_3->bridge)
  return FUNC_1(VAR_1, VAR_2,
         VAR_3, VAR_4);

 if (VAR_3->term)
  return FUNC_2(VAR_1, VAR_2,
       VAR_3, VAR_4);

 return -VAR_0;
}
