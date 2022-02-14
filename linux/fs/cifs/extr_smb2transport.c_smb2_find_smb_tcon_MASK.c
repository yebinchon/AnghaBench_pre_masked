
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_tcon {int dummy; } ;
struct cifs_ses {int dummy; } ;
struct TCP_Server_Info {int dummy; } ;
typedef int __u64 ;
typedef int __u32 ;


 int VAR_0 ;
 struct cifs_ses* FUNC_0 (struct TCP_Server_Info*,int ) ;
 struct cifs_tcon* FUNC_1 (struct cifs_ses*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct cifs_tcon *
FUNC_4(struct TCP_Server_Info *VAR_1, __u64 VAR_2, __u32 VAR_3)
{
 struct cifs_ses *VAR_4;
 struct cifs_tcon *VAR_5;

 FUNC_2(&VAR_0);
 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_4) {
  FUNC_3(&VAR_0);
  return ((void*)0);
 }
 VAR_5 = FUNC_1(VAR_4, VAR_3);
 FUNC_3(&VAR_0);

 return VAR_5;
}
