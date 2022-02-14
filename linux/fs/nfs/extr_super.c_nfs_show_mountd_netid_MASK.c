
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_family; } ;
struct seq_file {int dummy; } ;
struct nfs_server {int mountd_protocol; int mountd_address; } ;






 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (struct seq_file*,char*,char*) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_4, struct nfs_server *VAR_5,
      int VAR_6)
{
 struct sockaddr *VAR_7 = (struct sockaddr *) &VAR_5->mountd_address;
 char *VAR_8 = ((void*)0);

 switch (VAR_7->sa_family) {
 case 131:
  switch (VAR_5->mountd_protocol) {
  case 128:
   VAR_8 = VAR_2;
   break;
  case 129:
   VAR_8 = VAR_0;
   break;
  }
  break;
 case 130:
  switch (VAR_5->mountd_protocol) {
  case 128:
   VAR_8 = VAR_3;
   break;
  case 129:
   VAR_8 = VAR_1;
   break;
  }
  break;
 }
 if (VAR_8 || VAR_6)
  FUNC_0(VAR_4, ",mountproto=%s", VAR_8 ?: "auto");
}
