
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at24_data {size_t write_max; int page_size; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;

__attribute__((used)) static size_t FUNC_1(struct at24_data *VAR_0,
          unsigned int VAR_1, size_t VAR_2)
{
 unsigned int VAR_3;


 if (VAR_2 > VAR_0->write_max)
  VAR_2 = VAR_0->write_max;


 VAR_3 = FUNC_0(VAR_1 + 1, VAR_0->page_size);
 if (VAR_1 + VAR_2 > VAR_3)
  VAR_2 = VAR_3 - VAR_1;

 return VAR_2;
}
