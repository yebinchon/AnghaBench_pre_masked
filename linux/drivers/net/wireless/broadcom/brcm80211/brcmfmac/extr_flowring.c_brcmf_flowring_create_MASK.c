
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct brcmf_flowring_ring {int hash_id; int skblist; int status; } ;
struct brcmf_flowring_hash {size_t ifidx; size_t fifo; int flowid; int mac; } ;
struct brcmf_flowring {scalar_t__* addr_mode; int nrofrings; struct brcmf_flowring_ring** rings; struct brcmf_flowring_hash* hash; scalar_t__ tdls_active; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t*,size_t,size_t) ;
 int FUNC_1 (size_t,size_t) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct brcmf_flowring*,size_t*) ;
 size_t* VAR_9 ;
 scalar_t__ FUNC_3 (size_t*) ;
 scalar_t__ FUNC_4 (int ) ;
 struct brcmf_flowring_ring* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,size_t*,int ) ;
 int FUNC_7 (int *) ;

u32 FUNC_8(struct brcmf_flowring *VAR_10, u8 VAR_11[VAR_6],
     u8 VAR_12, u8 VAR_13)
{
 struct brcmf_flowring_ring *VAR_14;
 struct brcmf_flowring_hash *VAR_15;
 u16 VAR_16;
 u32 VAR_17;
 bool VAR_18;
 u8 VAR_19;
 bool VAR_20;
 u8 *VAR_21;

 VAR_19 = VAR_9[VAR_12];
 VAR_20 = (VAR_10->addr_mode[VAR_13] == VAR_0);
 VAR_21 = VAR_11;
 if ((!VAR_20) && (FUNC_3(VAR_11))) {
  VAR_21 = (u8 *)VAR_1;
  VAR_19 = 0;
 }
 if ((VAR_20) && (VAR_10->tdls_active) &&
     (FUNC_2(VAR_10, VAR_11))) {
  VAR_20 = 0;
 }
 VAR_16 = VAR_20 ? FUNC_1(VAR_19, VAR_13) :
     FUNC_0(VAR_21, VAR_19, VAR_13);
 VAR_16 &= (VAR_2 - 1);
 VAR_18 = 0;
 VAR_15 = VAR_10->hash;
 for (VAR_17 = 0; VAR_17 < VAR_2; VAR_17++) {
  if ((VAR_15[VAR_16].ifidx == VAR_4) &&
      (FUNC_4(VAR_15[VAR_16].mac))) {
   VAR_18 = 1;
   break;
  }
  VAR_16++;
  VAR_16 &= (VAR_2 - 1);
 }
 if (VAR_18) {
  for (VAR_17 = 0; VAR_17 < VAR_10->nrofrings; VAR_17++) {
   if (VAR_10->rings[VAR_17] == ((void*)0))
    break;
  }
  if (VAR_17 == VAR_10->nrofrings)
   return -VAR_5;

  VAR_14 = FUNC_5(sizeof(*VAR_14), VAR_7);
  if (!VAR_14)
   return -VAR_5;

  FUNC_6(VAR_15[VAR_16].mac, VAR_21, VAR_6);
  VAR_15[VAR_16].fifo = VAR_19;
  VAR_15[VAR_16].ifidx = VAR_13;
  VAR_15[VAR_16].flowid = VAR_17;

  VAR_14->hash_id = VAR_16;
  VAR_14->status = VAR_8;
  FUNC_7(&VAR_14->skblist);
  VAR_10->rings[VAR_17] = VAR_14;

  return VAR_17;
 }
 return VAR_3;
}
