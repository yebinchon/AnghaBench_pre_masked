
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ tagIdent; } ;
struct fileIdentDesc {int lengthFileIdent; scalar_t__ lengthOfImpUse; TYPE_1__ descTag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int,...) ;

struct fileIdentDesc *FUNC_3(void *VAR_2, int VAR_3, int *VAR_4)
{
 struct fileIdentDesc *VAR_5;
 int VAR_6;
 uint8_t *VAR_7;
 int VAR_8;

 if ((!VAR_2) || (!VAR_4)) {
  FUNC_2("invalidparms, buffer=%p, offset=%p\n",
     VAR_2, VAR_4);
  return ((void*)0);
 }

 VAR_7 = VAR_2;

 if ((*VAR_4 > 0) && (*VAR_4 < VAR_3))
  VAR_7 += *VAR_4;
 VAR_5 = (struct fileIdentDesc *)VAR_7;
 if (VAR_5->descTag.tagIdent != FUNC_0(VAR_0)) {
  FUNC_2("0x%x != TAG_IDENT_FID\n",
     FUNC_1(VAR_5->descTag.tagIdent));
  FUNC_2("offset: %d sizeof: %lu bufsize: %d\n",
     *VAR_4, (unsigned long)sizeof(struct fileIdentDesc),
     VAR_3);
  return ((void*)0);
 }
 if ((*VAR_4 + sizeof(struct fileIdentDesc)) > VAR_3)
  VAR_6 = sizeof(struct fileIdentDesc);
 else
  VAR_6 = sizeof(struct fileIdentDesc) +
   VAR_5->lengthFileIdent + FUNC_1(VAR_5->lengthOfImpUse);


 VAR_8 = VAR_6 % VAR_1;
 if (VAR_8)
  VAR_6 += (VAR_1 - VAR_8);
 *VAR_4 = *VAR_4 + VAR_6;

 return VAR_5;
}
