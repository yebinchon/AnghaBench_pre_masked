
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct of_bus {scalar_t__ (* map ) (int *,int const*,int,int,int) ;int (* translate ) (int *,scalar_t__,int) ;} ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (char*,int *,int) ;
 int FUNC_3 (struct device_node*) ;
 int * FUNC_4 (struct device_node*,char const*,unsigned int*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (int *,int const*,int,int,int) ;
 int FUNC_8 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_9(struct device_node *VAR_1, struct of_bus *VAR_2,
       struct of_bus *VAR_3, __be32 *VAR_4,
       int VAR_5, int VAR_6, int VAR_7, const char *VAR_8)
{
 const __be32 *VAR_9;
 unsigned int VAR_10;
 int VAR_11;
 u64 VAR_12 = VAR_0;
 VAR_9 = FUNC_4(VAR_1, VAR_8, &VAR_10);
 if (VAR_9 == ((void*)0) && !FUNC_3(VAR_1)) {
  FUNC_6("no ranges; cannot translate\n");
  return 1;
 }
 if (VAR_9 == ((void*)0) || VAR_10 == 0) {
  VAR_12 = FUNC_5(VAR_4, VAR_5);
  FUNC_1(VAR_4, 0, VAR_7 * 4);
  FUNC_6("empty ranges; 1:1 translation\n");
  goto finish;
 }

 FUNC_6("walking ranges...\n");


 VAR_10 /= 4;
 VAR_11 = VAR_5 + VAR_7 + VAR_6;
 for (; VAR_10 >= VAR_11; VAR_10 -= VAR_11, VAR_9 += VAR_11) {
  VAR_12 = VAR_2->map(VAR_4, VAR_9, VAR_5, VAR_6, VAR_7);
  if (VAR_12 != VAR_0)
   break;
 }
 if (VAR_12 == VAR_0) {
  FUNC_6("not found !\n");
  return 1;
 }
 FUNC_0(VAR_4, VAR_9 + VAR_5, 4 * VAR_7);

 finish:
 FUNC_2("parent translation for:", VAR_4, VAR_7);
 FUNC_6("with offset: %llx\n", (unsigned long long)VAR_12);


 return VAR_3->translate(VAR_4, VAR_12, VAR_7);
}
