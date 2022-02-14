
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct storm_defs {size_t sem_fast_mem_addr; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct fw_info_location {int size; size_t grc_addr; } ;
struct fw_info {int size; size_t grc_addr; } ;
typedef int fw_info_location ;


 size_t VAR_0 ;
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct fw_info_location*,int ,int) ;
 size_t FUNC_3 (struct qed_hwfn*,struct qed_ptt*,size_t) ;
 struct storm_defs* VAR_3 ;

__attribute__((used)) static void FUNC_4(struct qed_hwfn *VAR_4,
       struct qed_ptt *VAR_5,
       u8 VAR_6, struct fw_info *VAR_7)
{
 struct storm_defs *VAR_8 = &VAR_3[VAR_6];
 struct fw_info_location VAR_9;
 u32 VAR_10, VAR_11, *VAR_12;

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 FUNC_2(VAR_7, 0, sizeof(*VAR_7));




 VAR_10 = VAR_8->sem_fast_mem_addr + VAR_1 +
        FUNC_1(VAR_2) -
        sizeof(VAR_9);
 VAR_12 = (u32 *)&VAR_9;

 for (VAR_11 = 0; VAR_11 < FUNC_0(sizeof(VAR_9));
      VAR_11++, VAR_10 += VAR_0)
  VAR_12[VAR_11] = FUNC_3(VAR_4, VAR_5, VAR_10);


 if (VAR_9.size > 0 && VAR_9.size <=
     sizeof(*VAR_7)) {
  VAR_10 = VAR_9.grc_addr;
  VAR_12 = (u32 *)VAR_7;
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_9.size);
       VAR_11++, VAR_10 += VAR_0)
   VAR_12[VAR_11] = FUNC_3(VAR_4, VAR_5, VAR_10);
 }
}
