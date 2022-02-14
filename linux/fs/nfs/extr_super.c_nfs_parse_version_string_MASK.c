
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct nfs_parsed_mount_data {int version; int minorversion; int flags; } ;


 int VAR_0 ;






 int FUNC_0 (char*,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(char *VAR_2,
  struct nfs_parsed_mount_data *VAR_3,
  substring_t *VAR_4)
{
 VAR_3->flags &= ~VAR_0;
 switch (FUNC_0(VAR_2, VAR_1, VAR_4)) {
 case 133:
  VAR_3->version = 2;
  break;
 case 132:
  VAR_3->flags |= VAR_0;
  VAR_3->version = 3;
  break;
 case 131:




  VAR_3->version = 4;
  break;
 case 130:
  VAR_3->version = 4;
  VAR_3->minorversion = 0;
  break;
 case 129:
  VAR_3->version = 4;
  VAR_3->minorversion = 1;
  break;
 case 128:
  VAR_3->version = 4;
  VAR_3->minorversion = 2;
  break;
 default:
  return 0;
 }
 return 1;
}
