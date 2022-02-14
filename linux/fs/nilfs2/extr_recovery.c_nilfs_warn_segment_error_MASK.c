
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int FUNC_0 (struct super_block*,int ,char*,...) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_4, int VAR_5)
{
 const char *VAR_6 = ((void*)0);

 switch (VAR_5) {
 case 131:
  FUNC_0(VAR_4, VAR_2, "I/O error reading segment");
  return -VAR_1;
 case 130:
  VAR_6 = "Magic number mismatch";
  break;
 case 129:
  VAR_6 = "Sequence number mismatch";
  break;
 case 133:
  VAR_6 = "Checksum error in super root";
  break;
 case 134:
  VAR_6 = "Checksum error in segment payload";
  break;
 case 132:
  VAR_6 = "Inconsistency found";
  break;
 case 128:
  VAR_6 = "No super root in the last segment";
  break;
 default:
  FUNC_0(VAR_4, VAR_2, "unrecognized segment error %d", VAR_5);
  return -VAR_0;
 }
 FUNC_0(VAR_4, VAR_3, "invalid segment: %s", VAR_6);
 return -VAR_0;
}
