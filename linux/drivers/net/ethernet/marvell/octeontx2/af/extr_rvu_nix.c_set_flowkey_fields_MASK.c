
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u32 ;
typedef int tmp ;
struct nix_rx_flowkey_alg {int sel_chan; int bytesm1; int ltype_match; int hdr_offset; int ltype_mask; int ena; int key_offset; void* lid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct nix_rx_flowkey_alg*,struct nix_rx_flowkey_alg*,int) ;
 int FUNC_4 (struct nix_rx_flowkey_alg*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct nix_rx_flowkey_alg *VAR_11, u32 VAR_12)
{
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18, VAR_19, VAR_20;
 struct nix_rx_flowkey_alg *VAR_21;
 struct nix_rx_flowkey_alg VAR_22;
 u32 VAR_23, VAR_24;

 if (!VAR_11)
  return -VAR_0;




 FUNC_4(VAR_11, 0, sizeof(uint64_t) * 5);
 VAR_17 = 0; VAR_18 = 0; VAR_20 = 0;
 VAR_14 = 0; VAR_15 = 0; VAR_16 = 1;
 VAR_21 = &VAR_22; VAR_19 = FUNC_1(VAR_12);
 for (VAR_13 = 0;
      VAR_13 < VAR_19 && VAR_14 < 5 &&
      VAR_15 < 40; VAR_13++) {
  VAR_23 = FUNC_0(VAR_13);
  VAR_24 = VAR_12 & VAR_23;

  if (VAR_16)
   FUNC_4(&VAR_22, 0, sizeof(VAR_22));

  switch (VAR_23) {
  case 131:
   VAR_21->sel_chan = 1;

   VAR_21->bytesm1 = 1;
   VAR_16 = 1;
   VAR_17 = 1;
   break;
  case 133:
   VAR_21->lid = VAR_4;
   VAR_21->ltype_match = VAR_6;
   VAR_21->hdr_offset = 12;
   VAR_21->bytesm1 = 7;
   VAR_21->ltype_mask = 0xF;
   VAR_16 = 1;
   VAR_17 = 0;
   break;
  case 132:
   VAR_21->lid = VAR_4;
   VAR_21->ltype_match = VAR_7;
   VAR_21->hdr_offset = 8;
   VAR_21->bytesm1 = 31;
   VAR_21->ltype_mask = 0xF;
   VAR_16 = 1;
   VAR_17 = 1;
   break;
  case 129:
  case 128:
  case 130:
   VAR_21->lid = VAR_5;
   VAR_21->bytesm1 = 3;
   if (VAR_23 == 129 && VAR_24) {
    VAR_21->ltype_match |= VAR_9;
    VAR_20 = 1;
   } else if (VAR_23 == 128 &&
       VAR_24) {
    VAR_21->ltype_match |= VAR_10;
    VAR_20 = 1;
   } else if (VAR_23 == 130 &&
       VAR_24) {
    VAR_21->ltype_match |= VAR_8;
    VAR_20 = 1;
   }
   VAR_21->ltype_mask = ~VAR_21->ltype_match;
   if (VAR_23 == 130) {



    if (VAR_20) {
     VAR_24 = 1;
     VAR_20 = 0;
    }
    VAR_16 = 1;
    VAR_17 = 1;
   } else {
    VAR_16 = 0;
    VAR_17 = 0;
   }
   break;
  }
  VAR_21->ena = 1;


  if (VAR_24) {
   VAR_21->key_offset = VAR_15;
   FUNC_3(&VAR_11[VAR_14], VAR_21, sizeof(*VAR_21));
   VAR_18 = FUNC_2(VAR_18, VAR_21->bytesm1 + 1);


   if (VAR_16)
    VAR_14++;
  }


  if (VAR_17) {
   VAR_15 += VAR_18;
   VAR_18 = 0;
  }
 }

 if (VAR_13 == VAR_19 && VAR_15 <= 40)
  return 0;
 else
  return VAR_3;
}
