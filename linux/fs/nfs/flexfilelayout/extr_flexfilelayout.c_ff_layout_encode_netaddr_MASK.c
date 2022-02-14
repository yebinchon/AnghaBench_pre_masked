
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {int sa_family; } ;
struct nfs4_pnfs_ds_addr {int da_addr; } ;
typedef int portbuf ;
typedef int addrbuf ;
typedef int __be32 ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sockaddr*,char*,int) ;
 int FUNC_2 (struct sockaddr*,char*,int) ;
 unsigned short FUNC_3 (int ) ;
 int FUNC_4 (char*,int,char*,unsigned short,unsigned short) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int *,char*,int) ;
 int * FUNC_7 (struct xdr_stream*,int) ;

__attribute__((used)) static void
FUNC_8(struct xdr_stream *VAR_2, struct nfs4_pnfs_ds_addr *VAR_3)
{
 struct sockaddr *VAR_4 = (struct sockaddr *)&VAR_3->da_addr;
 char VAR_5[VAR_1];
 char VAR_6[VAR_0];
 char *VAR_7;
 unsigned short VAR_8;
 int VAR_9, VAR_10;
 __be32 *VAR_11;

 switch (VAR_4->sa_family) {
 case 129:
  if (FUNC_1(VAR_4, VAR_6, sizeof(VAR_6)) == 0)
   return;
  VAR_8 = FUNC_3(((struct sockaddr_in *)VAR_4)->sin_port);
  VAR_7 = "tcp";
  VAR_10 = 3;
  break;
 case 128:
  if (FUNC_2(VAR_4, VAR_6, sizeof(VAR_6)) == 0)
   return;
  VAR_8 = FUNC_3(((struct sockaddr_in6 *)VAR_4)->sin6_port);
  VAR_7 = "tcp6";
  VAR_10 = 4;
  break;
 default:

  FUNC_0(1);
  return;
 }

 FUNC_4(VAR_5, sizeof(VAR_5), ".%u.%u", VAR_8 >> 8, VAR_8 & 0xff);
 VAR_9 = FUNC_5(VAR_6, VAR_5, sizeof(VAR_6));

 VAR_11 = FUNC_7(VAR_2, 4 + VAR_10);
 FUNC_6(VAR_11, VAR_7, VAR_10);

 VAR_11 = FUNC_7(VAR_2, 4 + VAR_9);
 FUNC_6(VAR_11, VAR_6, VAR_9);
}
