
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct page {TYPE_1__* mapping; } ;
struct iomap {scalar_t__ length; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int,struct iomap*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct page*) ;

__attribute__((used)) static int FUNC_3(struct page *VAR_2)
{
 u64 VAR_3 = FUNC_2(VAR_2);
 u64 VAR_4 = VAR_1;

 do {
  struct iomap VAR_5 = { };

  if (FUNC_0(VAR_2->mapping->host, VAR_3, 1, &VAR_5))
   return -VAR_0;

  VAR_5.length = FUNC_1(VAR_5.length, VAR_4);
  VAR_4 -= VAR_5.length;
  VAR_3 += VAR_5.length;
 } while (VAR_4 > 0);

 return 0;
}
