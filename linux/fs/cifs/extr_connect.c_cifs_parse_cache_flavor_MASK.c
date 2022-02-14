
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct smb_vol {int direct_io; int strict_io; int cache_ro; int cache_rw; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,int ,int *) ;

__attribute__((used)) static int
FUNC_2(char *VAR_3, struct smb_vol *VAR_4)
{
 substring_t VAR_5[VAR_0];

 switch (FUNC_1(VAR_3, VAR_2, VAR_5)) {
 case 132:
  VAR_4->direct_io = 0;
  VAR_4->strict_io = 0;
  VAR_4->cache_ro = 0;
  VAR_4->cache_rw = 0;
  break;
 case 128:
  VAR_4->direct_io = 0;
  VAR_4->strict_io = 1;
  VAR_4->cache_ro = 0;
  VAR_4->cache_rw = 0;
  break;
 case 131:
  VAR_4->direct_io = 1;
  VAR_4->strict_io = 0;
  VAR_4->cache_ro = 0;
  VAR_4->cache_rw = 0;
  break;
 case 130:
  VAR_4->direct_io = 0;
  VAR_4->strict_io = 0;
  VAR_4->cache_ro = 1;
  VAR_4->cache_rw = 0;
  break;
 case 129:
  VAR_4->direct_io = 0;
  VAR_4->strict_io = 0;
  VAR_4->cache_ro = 0;
  VAR_4->cache_rw = 1;
  break;
 default:
  FUNC_0(VAR_1, "bad cache= option: %s\n", VAR_3);
  return 1;
 }
 return 0;
}
