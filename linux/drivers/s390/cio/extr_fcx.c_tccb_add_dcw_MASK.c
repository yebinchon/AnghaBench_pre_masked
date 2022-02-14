
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct tccb_tcat {int dummy; } ;
struct tccb_tcah {int dummy; } ;
struct TYPE_2__ {int tcal; } ;
struct tccb {TYPE_1__ tcah; int * tca; } ;
struct dcw {int * cd; void* cd_count; int count; void* flags; void* cmd; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 struct dcw* FUNC_1 (int ) ;
 int FUNC_2 (int *,void*,void*) ;
 int FUNC_3 (struct dcw*,int ,int) ;
 int FUNC_4 (struct tccb*) ;

struct dcw *FUNC_5(struct tccb *VAR_1, size_t VAR_2, u8 VAR_3, u8 VAR_4,
    void *VAR_5, u8 VAR_6, u32 VAR_7)
{
 struct dcw *VAR_8;
 int VAR_9;
 int VAR_10;


 VAR_10 = FUNC_4(VAR_1);
 VAR_9 = FUNC_0(sizeof(struct dcw) + VAR_6, 4);
 if (sizeof(struct tccb_tcah) + VAR_10 + VAR_9 +
     sizeof(struct tccb_tcat) > VAR_2)
  return FUNC_1(-VAR_0);

 VAR_8 = (struct dcw *) &VAR_1->tca[VAR_10];
 FUNC_3(VAR_8, 0, VAR_9);
 VAR_8->cmd = VAR_3;
 VAR_8->flags = VAR_4;
 VAR_8->count = VAR_7;
 VAR_8->cd_count = VAR_6;
 if (VAR_5)
  FUNC_2(&VAR_8->cd[0], VAR_5, VAR_6);
 VAR_1->tcah.tcal += VAR_9;
 return VAR_8;
}
