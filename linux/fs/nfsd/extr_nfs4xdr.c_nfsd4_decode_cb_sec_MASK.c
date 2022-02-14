
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct user_namespace {int dummy; } ;
struct nfsd4_compoundargs {int rqstp; } ;
struct nfsd4_cb_sec {int flavor; int gid; int uid; } ;
typedef int kuid_t ;
typedef int kgid_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;



 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct user_namespace*,int) ;
 int FUNC_7 (struct user_namespace*,int) ;
 struct user_namespace* FUNC_8 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static __be32 FUNC_10(struct nfsd4_compoundargs *VAR_4, struct nfsd4_cb_sec *VAR_5)
{
 VAR_0;
 struct user_namespace *VAR_6 = FUNC_8(VAR_4->rqstp);
 u32 VAR_7, VAR_8, VAR_9;
 char *VAR_10;
 int VAR_11;
 int VAR_12;


 FUNC_0(4);
 VAR_12 = FUNC_3(VAR_3++);
 if (VAR_12)
  VAR_5->flavor = (u32)(-1);
 else

  VAR_5->flavor = 0;
 for (VAR_11 = 0; VAR_11 < VAR_12; ++VAR_11) {
  FUNC_0(4);
  VAR_7 = FUNC_3(VAR_3++);
  switch (VAR_7) {
  case 129:

   if (VAR_5->flavor == (u32)(-1))
    VAR_5->flavor = 129;
   break;
  case 128:
   FUNC_0(8);

   VAR_7 = FUNC_3(VAR_3++);


   VAR_7 = FUNC_3(VAR_3++);
   FUNC_0(VAR_7);
   FUNC_1(VAR_10, VAR_7);


   FUNC_0(8);
   VAR_8 = FUNC_3(VAR_3++);
   VAR_9 = FUNC_3(VAR_3++);


   FUNC_0(4);
   VAR_7 = FUNC_3(VAR_3++);
   FUNC_0(VAR_7 * 4);
   if (VAR_5->flavor == (u32)(-1)) {
    kuid_t VAR_13 = FUNC_7(VAR_6, VAR_8);
    kgid_t VAR_14 = FUNC_6(VAR_6, VAR_9);
    if (FUNC_9(VAR_13) && FUNC_5(VAR_14)) {
     VAR_5->uid = VAR_13;
     VAR_5->gid = VAR_14;
     VAR_5->flavor = 128;
    } else {
     FUNC_4("RPC_AUTH_UNIX with invalid"
      "uid or gid ignoring!\n");
    }
   }
   break;
  case 130:
   FUNC_4("RPC_AUTH_GSS callback secflavor "
    "not supported!\n");
   FUNC_0(8);

   VAR_7 = FUNC_3(VAR_3++);

   VAR_7 = FUNC_3(VAR_3++);
   FUNC_0(VAR_7);
   VAR_3 += FUNC_2(VAR_7);

   FUNC_0(4);
   VAR_7 = FUNC_3(VAR_3++);
   FUNC_0(VAR_7);
   break;
  default:
   FUNC_4("Illegal callback secflavor\n");
   return VAR_2;
  }
 }
 VAR_1;
}
