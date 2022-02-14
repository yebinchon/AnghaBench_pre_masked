
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rccb {int wCommand; } ;
struct uwb_rc {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct uwb_rc*,struct uwb_rccb**,size_t*) ;
 int FUNC_1 (struct uwb_rc*,struct uwb_rccb**,size_t*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static
int FUNC_3(struct uwb_rc *VAR_1, struct uwb_rccb **VAR_2,
          size_t *VAR_3)
{
 int VAR_4;
 struct uwb_rccb *VAR_5 = *VAR_2;
 int VAR_6 = FUNC_2(VAR_5->wCommand);
 switch (VAR_6) {
 case 129:
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
  break;
 case 128:
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }
 return VAR_4;
}
