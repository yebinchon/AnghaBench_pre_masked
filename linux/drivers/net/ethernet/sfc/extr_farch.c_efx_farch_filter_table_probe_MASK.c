
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {struct efx_farch_filter_state* filter_state; } ;
struct efx_farch_filter_table {size_t id; unsigned int size; int used_bitmap; struct efx_farch_filter_spec* spec; int step; int offset; } ;
struct efx_farch_filter_state {struct efx_farch_filter_table* table; int lock; } ;
struct efx_farch_filter_spec {scalar_t__ type; } ;


 int FUNC_0 (scalar_t__) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct efx_nic*,struct efx_farch_filter_spec*) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int,int ) ;
 struct efx_farch_filter_state* FUNC_8 (int,int ) ;
 struct efx_farch_filter_spec* FUNC_9 (int ) ;

int FUNC_10(struct efx_nic *VAR_18)
{
 struct efx_farch_filter_state *VAR_19;
 struct efx_farch_filter_table *VAR_20;
 unsigned VAR_21;

 VAR_19 = FUNC_8(sizeof(struct efx_farch_filter_state), VAR_17);
 if (!VAR_19)
  return -VAR_7;
 VAR_18->filter_state = VAR_19;
 FUNC_6(&VAR_19->lock);

 VAR_20 = &VAR_19->table[VAR_3];
 VAR_20->id = VAR_3;
 VAR_20->offset = VAR_8;
 VAR_20->size = VAR_9;
 VAR_20->step = VAR_10;

 VAR_20 = &VAR_19->table[VAR_4];
 VAR_20->id = VAR_4;
 VAR_20->offset = VAR_11;
 VAR_20->size = VAR_12;
 VAR_20->step = VAR_13;

 VAR_20 = &VAR_19->table[VAR_2];
 VAR_20->id = VAR_2;
 VAR_20->size = VAR_0;

 VAR_20 = &VAR_19->table[VAR_5];
 VAR_20->id = VAR_5;
 VAR_20->offset = VAR_14;
 VAR_20->size = VAR_15;
 VAR_20->step = VAR_16;

 for (VAR_21 = 0; VAR_21 < VAR_1; VAR_21++) {
  VAR_20 = &VAR_19->table[VAR_21];
  if (VAR_20->size == 0)
   continue;
  VAR_20->used_bitmap = FUNC_7(FUNC_0(VAR_20->size),
          sizeof(unsigned long),
          VAR_17);
  if (!VAR_20->used_bitmap)
   goto fail;
  VAR_20->spec = FUNC_9(FUNC_2(sizeof(*VAR_20->spec),
       VAR_20->size));
  if (!VAR_20->spec)
   goto fail;
 }

 VAR_20 = &VAR_19->table[VAR_2];
 if (VAR_20->size) {

  struct efx_farch_filter_spec *VAR_22;
  unsigned VAR_23;

  for (VAR_23 = 0; VAR_23 < VAR_0; VAR_23++) {
   VAR_22 = &VAR_20->spec[VAR_23];
   VAR_22->type = VAR_6 + VAR_23;
   FUNC_3(VAR_18, VAR_22);
   FUNC_1(VAR_23, VAR_20->used_bitmap);
  }
 }

 FUNC_4(VAR_18);

 return 0;

fail:
 FUNC_5(VAR_18);
 return -VAR_7;
}
