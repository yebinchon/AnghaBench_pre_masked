
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {scalar_t__ nfsd_serv; } ;
struct file {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef enum vers_op { ____Placeholder_vers_op } vers_op ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (char*,int ,unsigned int*) ;
 struct nfsd_net* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct nfsd_net*,unsigned int,int) ;
 int VAR_8 ;
 int FUNC_4 (struct nfsd_net*,char*,int,char*,int,int) ;
 int FUNC_5 (struct nfsd_net*) ;
 int FUNC_6 (struct nfsd_net*,int,int) ;
 int FUNC_7 (char**,char*,size_t) ;
 int FUNC_8 (char*,char**,int ) ;
 int FUNC_9 (char*,int,char*) ;

__attribute__((used)) static ssize_t FUNC_10(struct file *VAR_9, char *VAR_10, size_t VAR_11)
{
 char *VAR_12 = VAR_10;
 char *VAR_13, *VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18;
 ssize_t VAR_19 = 0;
 char *VAR_20;
 struct nfsd_net *VAR_21 = FUNC_1(FUNC_2(VAR_9), VAR_8);

 if (VAR_11>0) {
  if (VAR_21->nfsd_serv)




   return -VAR_0;
  if (VAR_10[VAR_11-1] != '\n')
   return -VAR_1;
  VAR_10[VAR_11-1] = 0;

  VAR_13 = VAR_12;
  VAR_16 = FUNC_7(&VAR_12, VAR_13, VAR_11);
  if (VAR_16 <= 0) return -VAR_1;
  do {
   enum vers_op VAR_22;
   unsigned VAR_23;
   VAR_15 = *VAR_13;
   if (VAR_15 == '+' || VAR_15 == '-')
    VAR_17 = FUNC_8((VAR_13+1), &VAR_14, 0);
   else
    VAR_17 = FUNC_8(VAR_13, &VAR_14, 0);
   if (*VAR_14 == '.') {
    if (VAR_17 != 4)
     return -VAR_1;
    if (FUNC_0(VAR_14+1, 0, &VAR_23) < 0)
     return -VAR_1;
   }

   VAR_22 = VAR_15 == '-' ? VAR_3 : VAR_4;
   switch(VAR_17) {
   case 2:
   case 3:
    FUNC_6(VAR_21, VAR_17, VAR_22);
    break;
   case 4:
    if (*VAR_14 == '.') {
     if (FUNC_3(VAR_21, VAR_23, VAR_22) < 0)
      return -VAR_1;
    } else if ((VAR_22 == VAR_4) != FUNC_6(VAR_21, VAR_17, VAR_6)) {





     VAR_23 = 0;
     while (FUNC_3(VAR_21, VAR_23, VAR_22) >= 0)
      VAR_23++;
    }
    break;
   default:
    return -VAR_1;
   }
   VAR_13 += VAR_16 + 1;
  } while ((VAR_16 = FUNC_7(&VAR_12, VAR_13, VAR_11)) > 0);



  FUNC_5(VAR_21);
 }


 VAR_16 = 0;
 VAR_20 = "";
 VAR_18 = VAR_7;
 for (VAR_17=2 ; VAR_17 <= 4 ; VAR_17++) {
  int VAR_24;
  if (!FUNC_6(VAR_21, VAR_17, VAR_2))
   continue;

  VAR_24 = -1;
  do {
   VAR_16 = FUNC_4(VAR_21, VAR_10, VAR_18,
     VAR_20, VAR_17, VAR_24);
   if (VAR_16 >= VAR_18)
    goto out;
   VAR_18 -= VAR_16;
   VAR_10 += VAR_16;
   VAR_19 += VAR_16;
   VAR_24++;
   if (VAR_16)
    VAR_20 = " ";
  } while (VAR_17 == 4 && VAR_24 <= VAR_5);
 }
out:
 VAR_16 = FUNC_9(VAR_10, VAR_18, "\n");
 if (VAR_16 >= VAR_18)
  return -VAR_1;
 return VAR_19 + VAR_16;
}
