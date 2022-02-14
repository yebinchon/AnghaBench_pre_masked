
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct nfsd4_open {int op_rflags; int op_delegate_type; int op_recall; int op_why_no_deleg; int op_delegate_stateid; int * op_bmval; int op_cinfo; int op_stateid; } ;
struct nfsd4_compoundres {struct xdr_stream xdr; } ;
typedef int __be32 ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;






 void* FUNC_1 (int) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (struct xdr_stream*,int ,int ,int ) ;
 int FUNC_4 (struct xdr_stream*,int *) ;
 int VAR_2 ;
 int * FUNC_5 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32
FUNC_6(struct nfsd4_compoundres *VAR_3, __be32 VAR_4, struct nfsd4_open *VAR_5)
{
 struct xdr_stream *VAR_6 = &VAR_3->xdr;
 __be32 *VAR_7;

 VAR_4 = FUNC_4(VAR_6, &VAR_5->op_stateid);
 if (VAR_4)
  return VAR_4;
 VAR_7 = FUNC_5(VAR_6, 24);
 if (!VAR_7)
  return VAR_2;
 VAR_7 = FUNC_2(VAR_7, &VAR_5->op_cinfo);
 *VAR_7++ = FUNC_1(VAR_5->op_rflags);

 VAR_4 = FUNC_3(VAR_6, VAR_5->op_bmval[0], VAR_5->op_bmval[1],
     VAR_5->op_bmval[2]);
 if (VAR_4)
  return VAR_4;

 VAR_7 = FUNC_5(VAR_6, 4);
 if (!VAR_7)
  return VAR_2;

 *VAR_7++ = FUNC_1(VAR_5->op_delegate_type);
 switch (VAR_5->op_delegate_type) {
 case 133:
  break;
 case 131:
  VAR_4 = FUNC_4(VAR_6, &VAR_5->op_delegate_stateid);
  if (VAR_4)
   return VAR_4;
  VAR_7 = FUNC_5(VAR_6, 20);
  if (!VAR_7)
   return VAR_2;
  *VAR_7++ = FUNC_1(VAR_5->op_recall);




  *VAR_7++ = FUNC_1(VAR_0);
  *VAR_7++ = FUNC_1(0);
  *VAR_7++ = FUNC_1(0);
  *VAR_7++ = FUNC_1(0);
  break;
 case 130:
  VAR_4 = FUNC_4(VAR_6, &VAR_5->op_delegate_stateid);
  if (VAR_4)
   return VAR_4;
  VAR_7 = FUNC_5(VAR_6, 32);
  if (!VAR_7)
   return VAR_2;
  *VAR_7++ = FUNC_1(0);




  *VAR_7++ = FUNC_1(VAR_1);
  *VAR_7++ = FUNC_1(~(u32)0);
  *VAR_7++ = FUNC_1(~(u32)0);




  *VAR_7++ = FUNC_1(VAR_0);
  *VAR_7++ = FUNC_1(0);
  *VAR_7++ = FUNC_1(0);
  *VAR_7++ = FUNC_1(0);
  break;
 case 132:
  switch (VAR_5->op_why_no_deleg) {
  case 129:
  case 128:
   VAR_7 = FUNC_5(VAR_6, 8);
   if (!VAR_7)
    return VAR_2;
   *VAR_7++ = FUNC_1(VAR_5->op_why_no_deleg);

   *VAR_7++ = FUNC_1(0);
   break;
  default:
   VAR_7 = FUNC_5(VAR_6, 4);
   if (!VAR_7)
    return VAR_2;
   *VAR_7++ = FUNC_1(VAR_5->op_why_no_deleg);
  }
  break;
 default:
  FUNC_0();
 }

 return 0;
}
