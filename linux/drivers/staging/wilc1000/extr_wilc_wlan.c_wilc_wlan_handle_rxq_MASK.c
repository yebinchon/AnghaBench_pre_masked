
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wilc {int cfg_event; scalar_t__ quit; } ;
struct rxq_entry_t {int buffer_size; int * buffer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rxq_entry_t*) ;
 int FUNC_2 (struct wilc*,int *,int) ;
 struct rxq_entry_t* FUNC_3 (struct wilc*) ;

__attribute__((used)) static void FUNC_4(struct wilc *VAR_0)
{
 int VAR_1;
 u8 *VAR_2;
 struct rxq_entry_t *VAR_3;

 do {
  if (VAR_0->quit) {
   FUNC_0(&VAR_0->cfg_event);
   break;
  }
  VAR_3 = FUNC_3(VAR_0);
  if (!VAR_3)
   break;

  VAR_2 = VAR_3->buffer;
  VAR_1 = VAR_3->buffer_size;
  FUNC_2(VAR_0, VAR_2, VAR_1);

  FUNC_1(VAR_3);
 } while (1);
}
