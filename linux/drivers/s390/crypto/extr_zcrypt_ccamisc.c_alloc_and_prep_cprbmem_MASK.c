
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct CPRBX {int cprb_len; int cprb_ver_id; size_t rpl_msgbl; int * rpl_parmb; int * req_parmb; int func_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,size_t,int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(size_t VAR_2,
      u8 **VAR_3,
      struct CPRBX **VAR_4,
      struct CPRBX **VAR_5)
{
 u8 *VAR_6;
 size_t VAR_7 = sizeof(struct CPRBX) + VAR_2;
 struct CPRBX *VAR_8, *VAR_9;





 VAR_6 = FUNC_0(2, VAR_7, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_8 = (struct CPRBX *) VAR_6;
 VAR_9 = (struct CPRBX *) (VAR_6 + VAR_7);


 VAR_8->cprb_len = sizeof(struct CPRBX);
 VAR_8->cprb_ver_id = 0x02;
 FUNC_1(VAR_8->func_id, "T2", 2);
 VAR_8->rpl_msgbl = VAR_7;
 if (VAR_2) {
  VAR_8->req_parmb =
   ((u8 *) VAR_8) + sizeof(struct CPRBX);
  VAR_8->rpl_parmb =
   ((u8 *) VAR_9) + sizeof(struct CPRBX);
 }

 *VAR_3 = VAR_6;
 *VAR_4 = VAR_8;
 *VAR_5 = VAR_9;

 return 0;
}
