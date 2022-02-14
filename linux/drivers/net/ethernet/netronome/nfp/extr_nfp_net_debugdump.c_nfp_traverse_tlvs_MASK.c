
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_pf {int dummy; } ;
struct nfp_dump_tl {int length; int type; } ;
typedef int (* nfp_tlv_visit ) (struct nfp_pf*,struct nfp_dump_tl*,void*) ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct nfp_pf *VAR_1, void *VAR_2, u32 VAR_3, void *VAR_4,
    nfp_tlv_visit VAR_5)
{
 long long VAR_6 = VAR_3;
 struct nfp_dump_tl *VAR_7;
 u32 VAR_8;
 void *VAR_9 = VAR_2;
 int VAR_10;

 while (VAR_6 >= sizeof(*VAR_7)) {
  VAR_7 = VAR_9;
  if (!VAR_7->type && !VAR_7->length)
   break;

  if (FUNC_0(VAR_7->length) > VAR_6 - sizeof(*VAR_7))
   return -VAR_0;

  VAR_8 = sizeof(*VAR_7) + FUNC_0(VAR_7->length);


  if (VAR_8 % 4 != 0)
   return -VAR_0;

  VAR_9 += VAR_8;
  VAR_6 -= VAR_8;
  VAR_10 = VAR_5(VAR_1, VAR_7, VAR_4);
  if (VAR_10)
   return VAR_10;
 }

 return 0;
}
