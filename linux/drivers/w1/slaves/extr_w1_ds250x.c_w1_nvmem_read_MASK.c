
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w1_slave {struct w1_eprom_data* family_data; } ;
struct w1_eprom_data {size_t size; int (* read ) (struct w1_slave*,int ) ;int * eprom; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (void*,int *,size_t) ;
 int FUNC_2 (struct w1_slave*,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, unsigned int VAR_2, void *VAR_3, size_t VAR_4)
{
 struct w1_slave *VAR_5 = VAR_1;
 struct w1_eprom_data *VAR_6 = VAR_5->family_data;
 size_t VAR_7 = VAR_6->size;
 int VAR_8;
 int VAR_9;

 if (VAR_2 > VAR_7)
  return -VAR_0;

 if ((VAR_2 + VAR_4) > VAR_7)
  VAR_4 = VAR_7 - VAR_2;

 VAR_9 = FUNC_0(VAR_2);
 do {
  VAR_8 = VAR_6->read(VAR_5, VAR_9++);
  if (VAR_8 < 0)
   return VAR_8;
 } while (VAR_9 < FUNC_0(VAR_2 + VAR_4));

 FUNC_1(VAR_3, &VAR_6->eprom[VAR_2], VAR_4);
 return 0;
}
