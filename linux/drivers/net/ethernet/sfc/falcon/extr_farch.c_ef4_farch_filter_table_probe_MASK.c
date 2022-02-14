
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_nic {struct ef4_farch_filter_state* filter_state; } ;
struct ef4_farch_filter_table {size_t id; scalar_t__ size; int used_bitmap; struct ef4_farch_filter_spec* spec; int step; int offset; } ;
struct ef4_farch_filter_state {struct ef4_farch_filter_table* table; } ;
struct ef4_farch_filter_spec {scalar_t__ type; } ;


 int FUNC_0 (scalar_t__) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct ef4_nic*,struct ef4_farch_filter_spec*) ;
 int FUNC_4 (struct ef4_nic*) ;
 int FUNC_5 (struct ef4_nic*) ;
 scalar_t__ FUNC_6 (struct ef4_nic*) ;
 int FUNC_7 (int ,int,int ) ;
 struct ef4_farch_filter_state* FUNC_8 (int,int ) ;
 struct ef4_farch_filter_spec* FUNC_9 (int ) ;

int FUNC_10(struct ef4_nic *VAR_11)
{
 struct ef4_farch_filter_state *VAR_12;
 struct ef4_farch_filter_table *VAR_13;
 unsigned VAR_14;

 VAR_12 = FUNC_8(sizeof(struct ef4_farch_filter_state), VAR_10);
 if (!VAR_12)
  return -VAR_6;
 VAR_11->filter_state = VAR_12;

 if (FUNC_6(VAR_11) >= VAR_5) {
  VAR_13 = &VAR_12->table[VAR_3];
  VAR_13->id = VAR_3;
  VAR_13->offset = VAR_7;
  VAR_13->size = VAR_8;
  VAR_13->step = VAR_9;
 }

 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
  VAR_13 = &VAR_12->table[VAR_14];
  if (VAR_13->size == 0)
   continue;
  VAR_13->used_bitmap = FUNC_7(FUNC_0(VAR_13->size),
          sizeof(unsigned long),
          VAR_10);
  if (!VAR_13->used_bitmap)
   goto fail;
  VAR_13->spec = FUNC_9(FUNC_2(sizeof(*VAR_13->spec),
       VAR_13->size));
  if (!VAR_13->spec)
   goto fail;
 }

 VAR_13 = &VAR_12->table[VAR_2];
 if (VAR_13->size) {

  struct ef4_farch_filter_spec *VAR_15;
  unsigned VAR_16;

  for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
   VAR_15 = &VAR_13->spec[VAR_16];
   VAR_15->type = VAR_4 + VAR_16;
   FUNC_3(VAR_11, VAR_15);
   FUNC_1(VAR_16, VAR_13->used_bitmap);
  }
 }

 FUNC_4(VAR_11);

 return 0;

fail:
 FUNC_5(VAR_11);
 return -VAR_6;
}
