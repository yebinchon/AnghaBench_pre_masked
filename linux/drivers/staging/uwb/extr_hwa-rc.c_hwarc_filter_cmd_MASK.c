
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rccb {int dummy; } ;
struct uwb_rc {int version; } ;


 int VAR_0 ;
 int FUNC_0 (struct uwb_rc*,struct uwb_rccb**,size_t*) ;

__attribute__((used)) static
int FUNC_1(struct uwb_rc *VAR_1, struct uwb_rccb **VAR_2,
       size_t *VAR_3)
{
 int VAR_4 = -VAR_0;
 if (VAR_1->version == 0x0100)
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 return VAR_4;
}
