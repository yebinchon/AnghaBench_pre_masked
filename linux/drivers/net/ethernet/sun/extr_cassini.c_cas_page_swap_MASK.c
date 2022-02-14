
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct cas {TYPE_1__*** rx_pages; } ;
struct TYPE_5__ {int buffer; } ;
typedef TYPE_1__ cas_page_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (struct cas*,int const) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static cas_page_t *FUNC_3(struct cas *VAR_0, const int VAR_1,
     const int VAR_2)
{
 cas_page_t **VAR_3 = VAR_0->rx_pages[0];
 cas_page_t **VAR_4 = VAR_0->rx_pages[1];


 if (FUNC_2(VAR_3[VAR_2]->buffer) > 1) {
  cas_page_t *VAR_5 = FUNC_1(VAR_0, VAR_2);
  if (VAR_5) {
   VAR_4[VAR_2] = VAR_3[VAR_2];
   VAR_3[VAR_2] = VAR_5;
  }
 }
 FUNC_0(VAR_3[VAR_2], 0);
 return VAR_3[VAR_2];
}
