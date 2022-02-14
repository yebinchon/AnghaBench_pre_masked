
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int from; } ;
typedef TYPE_1__ substring_t ;
struct udf_options {int novrs; int session; int lastblock; int anchor; unsigned int blocksize; int flags; int umask; int fmode; int dmode; int nls_map; int uid; int gid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_1__*,int*) ;
 int FUNC_6 (TYPE_1__*,int*) ;
 int FUNC_7 (char*,int ,TYPE_1__*) ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (char**,char*) ;
 int VAR_15 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(char *VAR_16, struct udf_options *VAR_17,
        bool VAR_18)
{
 char *VAR_19;
 int VAR_20;

 VAR_17->novrs = 0;
 VAR_17->session = 0xFFFFFFFF;
 VAR_17->lastblock = 0;
 VAR_17->anchor = 0;

 if (!VAR_16)
  return 1;

 while ((VAR_19 = FUNC_9(&VAR_16, ",")) != ((void*)0)) {
  substring_t VAR_21[VAR_0];
  int VAR_22;
  unsigned VAR_23;
  if (!*VAR_19)
   continue;

  VAR_22 = FUNC_7(VAR_19, VAR_15, VAR_21);
  switch (VAR_22) {
  case 140:
   VAR_17->novrs = 1;
   break;
  case 152:
   if (FUNC_5(&VAR_21[0], &VAR_20))
    return 0;
   VAR_23 = VAR_20;
   if (VAR_23 != 512 && VAR_23 != 1024 && VAR_23 != 2048 && VAR_23 != 4096)
    return 0;
   VAR_17->blocksize = VAR_23;
   VAR_17->flags |= (1 << VAR_1);
   break;
  case 130:
   VAR_17->flags |= (1 << VAR_11);
   break;
  case 131:
   VAR_17->flags |= (1 << VAR_10);
   break;
  case 142:
   VAR_17->flags &= ~(1 << VAR_12);
   break;
  case 154:
   VAR_17->flags |= (1 << VAR_12);
   break;
  case 136:
   VAR_17->flags |= (1 << VAR_13);
   break;
  case 143:
   VAR_17->flags &= ~(1 << VAR_13);
   break;
  case 147:
   if (FUNC_5(VAR_21, &VAR_20))
    return 0;
   VAR_17->gid = FUNC_3(FUNC_0(), VAR_20);
   if (!FUNC_1(VAR_17->gid))
    return 0;
   VAR_17->flags |= (1 << VAR_3);
   break;
  case 134:
   if (FUNC_5(VAR_21, &VAR_20))
    return 0;
   VAR_17->uid = FUNC_4(FUNC_0(), VAR_20);
   if (!FUNC_10(VAR_17->uid))
    return 0;
   VAR_17->flags |= (1 << VAR_9);
   break;
  case 132:
   if (FUNC_6(VAR_21, &VAR_20))
    return 0;
   VAR_17->umask = VAR_20;
   break;
  case 141:
   VAR_17->flags &= ~(1 << VAR_7);
   break;
  case 137:
   if (FUNC_5(VAR_21, &VAR_20))
    return 0;
   VAR_17->session = VAR_20;
   if (!VAR_18)
    VAR_17->flags |= (1 << VAR_6);
   break;
  case 144:
   if (FUNC_5(VAR_21, &VAR_20))
    return 0;
   VAR_17->lastblock = VAR_20;
   if (!VAR_18)
    VAR_17->flags |= (1 << VAR_4);
   break;
  case 153:
   if (FUNC_5(VAR_21, &VAR_20))
    return 0;
   VAR_17->anchor = VAR_20;
   break;
  case 128:
  case 139:
  case 150:
  case 138:

   break;
  case 129:
   VAR_17->flags |= (1 << VAR_14);
   break;
  case 145:
   if (!VAR_18) {
    if (VAR_17->nls_map)
     FUNC_11(VAR_17->nls_map);





    VAR_17->nls_map = FUNC_2(VAR_21[0].from);
    VAR_17->flags |= (1 << VAR_5);
   }
   break;
  case 135:
   VAR_17->flags |= (1 << VAR_8);
   break;
  case 133:
  case 146:

   break;
  case 148:
   VAR_17->flags |= (1 << VAR_2);
   break;
  case 149:
   if (FUNC_6(VAR_21, &VAR_20))
    return 0;
   VAR_17->fmode = VAR_20 & 0777;
   break;
  case 151:
   if (FUNC_6(VAR_21, &VAR_20))
    return 0;
   VAR_17->dmode = VAR_20 & 0777;
   break;
  default:
   FUNC_8("bad mount option \"%s\" or missing value\n", VAR_19);
   return 0;
  }
 }
 return 1;
}
