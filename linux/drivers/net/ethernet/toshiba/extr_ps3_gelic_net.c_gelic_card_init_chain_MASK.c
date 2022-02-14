
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gelic_descr_chain {struct gelic_descr* tail; struct gelic_descr* head; } ;
struct gelic_descr {scalar_t__ bus_addr; scalar_t__ next_descr_addr; struct gelic_descr* next; struct gelic_descr* prev; } ;
struct gelic_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct gelic_card*) ;
 scalar_t__ FUNC_2 (int ,struct gelic_descr*,int ,int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 int FUNC_4 (struct gelic_descr*,int ) ;
 int FUNC_5 (struct gelic_descr*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct gelic_card *VAR_4,
     struct gelic_descr_chain *VAR_5,
     struct gelic_descr *VAR_6, int VAR_7)
{
 int VAR_8;
 struct gelic_descr *VAR_9;

 VAR_9 = VAR_6;
 FUNC_5(VAR_9, 0, sizeof(*VAR_9) * VAR_7);


 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++, VAR_9++) {
  FUNC_4(VAR_9, VAR_2);
  VAR_9->bus_addr =
   FUNC_2(FUNC_1(VAR_4), VAR_9,
           VAR_3,
           VAR_0);

  if (!VAR_9->bus_addr)
   goto iommu_error;

  VAR_9->next = VAR_9 + 1;
  VAR_9->prev = VAR_9 - 1;
 }

 (VAR_9 - 1)->next = VAR_6;
 VAR_6->prev = (VAR_9 - 1);


 VAR_9 = VAR_6;
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++, VAR_9++) {
  VAR_9->next_descr_addr = FUNC_0(VAR_9->next->bus_addr);
 }

 VAR_5->head = VAR_6;
 VAR_5->tail = VAR_6;


 (VAR_9 - 1)->next_descr_addr = 0;

 return 0;

iommu_error:
 for (VAR_8--, VAR_9--; 0 <= VAR_8; VAR_8--, VAR_9--)
  if (VAR_9->bus_addr)
   FUNC_3(FUNC_1(VAR_4), VAR_9->bus_addr,
      VAR_3,
      VAR_0);
 return -VAR_1;
}
