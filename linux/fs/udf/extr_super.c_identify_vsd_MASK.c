
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct volStructDesc {int structType; int stdIdent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(const struct volStructDesc *VAR_7)
{
 int VAR_8 = 0;

 if (!FUNC_0(VAR_7->stdIdent, VAR_2, VAR_4)) {
  switch (VAR_7->structType) {
  case 0:
   FUNC_1("ISO9660 Boot Record found\n");
   break;
  case 1:
   FUNC_1("ISO9660 Primary Volume Descriptor found\n");
   break;
  case 2:
   FUNC_1("ISO9660 Supplementary Volume Descriptor found\n");
   break;
  case 3:
   FUNC_1("ISO9660 Volume Partition Descriptor found\n");
   break;
  case 255:
   FUNC_1("ISO9660 Volume Descriptor Set Terminator found\n");
   break;
  default:
   FUNC_1("ISO9660 VRS (%u) found\n", VAR_7->structType);
   break;
  }
 } else if (!FUNC_0(VAR_7->stdIdent, VAR_0, VAR_4))
  ;
 else if (!FUNC_0(VAR_7->stdIdent, VAR_5, VAR_4))
  VAR_8 = 1;
 else if (!FUNC_0(VAR_7->stdIdent, VAR_6, VAR_4))
  VAR_8 = 1;
 else if (!FUNC_0(VAR_7->stdIdent, VAR_1, VAR_4))
  ;
 else if (!FUNC_0(VAR_7->stdIdent, VAR_3, VAR_4))
  ;
 else {

  VAR_8 = -1;
 }

 return VAR_8;
}
