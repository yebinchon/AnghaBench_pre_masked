
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
typedef size_t u_int ;
struct ahd_pci_identity {int full_id; int id_mask; int * name; } ;
typedef int ahd_dev_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 size_t VAR_5 ;
 struct ahd_pci_identity* VAR_6 ;
 int FUNC_1 (int ,int ,int) ;

const struct ahd_pci_identity *
FUNC_2(ahd_dev_softc_t VAR_7)
{
 uint64_t VAR_8;
 uint16_t VAR_9;
 uint16_t VAR_10;
 uint16_t VAR_11;
 uint16_t VAR_12;
 const struct ahd_pci_identity *VAR_13;
 u_int VAR_14;

 VAR_10 = FUNC_1(VAR_7, VAR_2, 2);
 VAR_9 = FUNC_1(VAR_7, VAR_1, 2);
 VAR_12 = FUNC_1(VAR_7, VAR_4, 2);
 VAR_11 = FUNC_1(VAR_7, VAR_3, 2);
 VAR_8 = FUNC_0(VAR_9,
     VAR_10,
     VAR_11,
     VAR_12);





 VAR_8 &= VAR_0;

 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
  VAR_13 = &VAR_6[VAR_14];
  if (VAR_13->full_id == (VAR_8 & VAR_13->id_mask)) {

   if (VAR_13->name == ((void*)0))
    return (((void*)0));
   return (VAR_13);
  }
 }
 return (((void*)0));
}
