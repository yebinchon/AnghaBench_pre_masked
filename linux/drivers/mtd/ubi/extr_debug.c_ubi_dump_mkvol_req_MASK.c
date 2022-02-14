
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_mkvol_req {char* vol_id; char* alignment; char* vol_type; char* name_len; int name; scalar_t__ bytes; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,...) ;

void FUNC_2(const struct ubi_mkvol_req *VAR_0)
{
 char VAR_1[17];

 FUNC_1("Volume creation request dump:\n");
 FUNC_1("\tvol_id    %d\n", VAR_0->vol_id);
 FUNC_1("\talignment %d\n", VAR_0->alignment);
 FUNC_1("\tbytes     %lld\n", (long long)VAR_0->bytes);
 FUNC_1("\tvol_type  %d\n", VAR_0->vol_type);
 FUNC_1("\tname_len  %d\n", VAR_0->name_len);

 FUNC_0(VAR_1, VAR_0->name, 16);
 VAR_1[16] = 0;
 FUNC_1("\t1st 16 characters of name: %s\n", VAR_1);
}
