
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct nfsd_net*,int,int ) ;
 int FUNC_1 (struct nfsd_net*,unsigned int,int ) ;
 int FUNC_2 (char*,int,char const*,char const*,char,unsigned int,int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct nfsd_net *VAR_1, char *VAR_2, int VAR_3,
  const char *VAR_4, unsigned VAR_5, int VAR_6)
{
 const char *VAR_7 = VAR_6 < 0 ? "%s%c%u" : "%s%c%u.%u";
 bool VAR_8 = !!FUNC_1(VAR_1, VAR_5, VAR_0);

 if (VAR_5 == 4 && VAR_6 >= 0 &&
     !FUNC_0(VAR_1, VAR_6, VAR_0))
  VAR_8 = 0;
 if (VAR_6 == 0 && VAR_8)





  return 0;
 return FUNC_2(VAR_2, VAR_3, VAR_7, VAR_4,
   VAR_8 ? '+' : '-', VAR_5, VAR_6);
}
