
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct fcnvme_lsdesc_rjt {int dummy; } ;
struct TYPE_2__ {void* vendor; void* reason_explanation; void* reason_code; int desc_len; int desc_tag; } ;
struct fcnvme_ls_rjt {TYPE_1__ rjt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,int ,int ,void*) ;

__attribute__((used)) static int
FUNC_3(void *VAR_2, u16 VAR_3, u8 VAR_4,
   u8 VAR_5, u8 VAR_6, u8 VAR_7)
{
 struct fcnvme_ls_rjt *VAR_8 = VAR_2;

 FUNC_2(VAR_2, VAR_1,
   FUNC_1(sizeof(struct fcnvme_ls_rjt)),
   VAR_4);
 VAR_8->rjt.desc_tag = FUNC_0(VAR_0);
 VAR_8->rjt.desc_len = FUNC_1(sizeof(struct fcnvme_lsdesc_rjt));
 VAR_8->rjt.reason_code = VAR_5;
 VAR_8->rjt.reason_explanation = VAR_6;
 VAR_8->rjt.vendor = VAR_7;

 return sizeof(struct fcnvme_ls_rjt);
}
