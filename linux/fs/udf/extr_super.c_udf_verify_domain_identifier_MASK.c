
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct regid {int flags; scalar_t__ identSuffix; int ident; } ;
struct domainEntityIDSuffix {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct super_block*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct super_block*,char*,char*) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_6,
     struct regid *VAR_7, char *VAR_8)
{
 struct domainEntityIDSuffix *VAR_9;

 if (FUNC_1(VAR_7->ident, VAR_5, FUNC_3(VAR_5))) {
  FUNC_4(VAR_6, "Not OSTA UDF compliant %s descriptor.\n", VAR_8);
  goto force_ro;
 }
 if (VAR_7->flags & (1 << VAR_3)) {
  FUNC_4(VAR_6, "Possibly not OSTA UDF compliant %s descriptor.\n",
    VAR_8);
  goto force_ro;
 }
 VAR_9 = (struct domainEntityIDSuffix *)VAR_7->identSuffix;
 if (VAR_9->flags & (1 << VAR_1) ||
     VAR_9->flags & (1 << VAR_2)) {
  if (!FUNC_2(VAR_6)) {
   FUNC_4(VAR_6, "Descriptor for %s marked write protected."
     " Forcing read only mount.\n", VAR_8);
  }
  goto force_ro;
 }
 return 0;

force_ro:
 if (!FUNC_2(VAR_6))
  return -VAR_0;
 FUNC_0(VAR_6, VAR_4);
 return 0;
}
