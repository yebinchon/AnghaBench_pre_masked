
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct compress_ioctl {int CompressionState; } ;
struct cifs_tcon {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int const,struct cifs_tcon*,int ,int ,int ,int,char*,int,int ,char**,int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;

int
FUNC_3(const unsigned int VAR_4, struct cifs_tcon *VAR_5,
       u64 VAR_6, u64 VAR_7)
{
 int VAR_8;
 struct compress_ioctl VAR_9;
 char *VAR_10 = ((void*)0);

 VAR_9.CompressionState =
   FUNC_2(VAR_1);

 VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7,
   VAR_2, 1 ,
   (char *)&VAR_9 ,
   2 , VAR_0 ,
   &VAR_10 , ((void*)0));

 FUNC_1(VAR_3, "set compression rc %d\n", VAR_8);

 return VAR_8;
}
