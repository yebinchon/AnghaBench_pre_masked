
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {unsigned int max_connections; } ;
struct file {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char**,unsigned int*) ;
 struct nfsd_net* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct file*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_4(struct file *VAR_2, char *VAR_3, size_t VAR_4)
{
 char *VAR_5 = VAR_3;
 struct nfsd_net *VAR_6 = FUNC_1(FUNC_2(VAR_2), VAR_1);
 unsigned int VAR_7 = VAR_6->max_connections;

 if (VAR_4 > 0) {
  int VAR_8 = FUNC_0(&VAR_5, &VAR_7);

  if (VAR_8)
   return VAR_8;
  VAR_6->max_connections = VAR_7;
 }

 return FUNC_3(VAR_3, VAR_0, "%u\n", VAR_7);
}
