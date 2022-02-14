
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct smcd_dev {struct ism_dev* priv; } ;
struct ism_dev {int dummy; } ;


 int FUNC_0 (int ,unsigned int,int,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct ism_dev*,int ,void*,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct smcd_dev *VAR_1, u64 VAR_2, unsigned int VAR_3,
      bool VAR_4, unsigned int VAR_5, void *VAR_6, unsigned int VAR_7)
{
 struct ism_dev *VAR_8 = VAR_1->priv;
 unsigned int VAR_9;
 u64 VAR_10;
 int VAR_11;

 while (VAR_7) {
  VAR_9 = FUNC_2(VAR_5, VAR_7, VAR_0);
  VAR_10 = FUNC_0(VAR_2, VAR_3, VAR_7 == VAR_9 ? VAR_4 : 0,
      VAR_5);

  VAR_11 = FUNC_1(VAR_8, VAR_10, VAR_6, VAR_9);
  if (VAR_11)
   return VAR_11;

  VAR_7 -= VAR_9;
  VAR_6 += VAR_9;
  VAR_5 += VAR_9;
 }

 return 0;
}
