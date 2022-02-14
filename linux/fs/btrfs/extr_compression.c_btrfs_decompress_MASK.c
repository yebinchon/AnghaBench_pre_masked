
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int (* decompress ) (struct list_head*,unsigned char*,struct page*,unsigned long,size_t,size_t) ;} ;


 TYPE_1__** VAR_0 ;
 struct list_head* FUNC_0 (int,int ) ;
 int FUNC_1 (int,struct list_head*) ;
 int FUNC_2 (struct list_head*,unsigned char*,struct page*,unsigned long,size_t,size_t) ;

int FUNC_3(int VAR_1, unsigned char *VAR_2, struct page *VAR_3,
       unsigned long VAR_4, size_t VAR_5, size_t VAR_6)
{
 struct list_head *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_1, 0);
 VAR_8 = VAR_0[VAR_1]->decompress(VAR_7, VAR_2,
        VAR_3, VAR_4,
        VAR_5, VAR_6);
 FUNC_1(VAR_1, VAR_7);

 return VAR_8;
}
