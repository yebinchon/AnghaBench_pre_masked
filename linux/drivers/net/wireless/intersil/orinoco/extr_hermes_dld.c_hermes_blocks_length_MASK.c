
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dblock {int * data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct dblock const*) ;
 int FUNC_1 (struct dblock const*) ;

size_t
FUNC_2(const char *VAR_1, const void *VAR_2)
{
 const struct dblock *VAR_3 = (const struct dblock *) VAR_1;
 int VAR_4 = 0;
 int VAR_5;

 VAR_2 -= sizeof(*VAR_3);



 while (((void *) VAR_3 <= VAR_2) &&
        (FUNC_0(VAR_3) != VAR_0)) {
  VAR_5 = FUNC_1(VAR_3);
  VAR_4 += sizeof(*VAR_3) + VAR_5;
  VAR_3 = (struct dblock *) &VAR_3->data[VAR_5];
 }

 return VAR_4;
}
