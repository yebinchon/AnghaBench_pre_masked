
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct ulp_cid_info {unsigned short* cid_array; size_t cid_alloc; int avlbl_cids; int cid_free; } ;
struct TYPE_2__ {int ulp_supported; } ;
struct beiscsi_hba {struct ulp_cid_info** cid_array_info; TYPE_1__ fw_config; } ;


 size_t FUNC_0 (struct beiscsi_hba*,unsigned short) ;
 size_t VAR_0 ;
 int FUNC_1 (struct beiscsi_hba*) ;
 size_t VAR_1 ;
 int FUNC_2 (struct beiscsi_hba*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct beiscsi_hba*,int ,char*,int ,int ) ;
 int FUNC_4 (unsigned short,void*) ;

__attribute__((used)) static int FUNC_5(struct beiscsi_hba *VAR_4)
{
 uint16_t VAR_5, VAR_6;
 unsigned short VAR_7, VAR_8;
 struct ulp_cid_info *VAR_9;


 VAR_5 = (VAR_4->cid_array_info[VAR_0]) ?
     FUNC_1(VAR_4) : 0;
 VAR_6 = (VAR_4->cid_array_info[VAR_1]) ?
     FUNC_2(VAR_4) : 0;
 VAR_8 = (VAR_5 > VAR_6) ?
   VAR_0 : VAR_1;





 if (!FUNC_4(VAR_8, (void *)&VAR_4->fw_config.ulp_supported))
  return VAR_2;

 VAR_9 = VAR_4->cid_array_info[VAR_8];
 VAR_7 = VAR_9->cid_array[VAR_9->cid_alloc];
 if (!VAR_9->avlbl_cids || VAR_7 == VAR_2) {
  FUNC_3(VAR_4, VAR_3,
    "BS_%d : failed to get cid: available %u:%u\n",
    VAR_9->avlbl_cids, VAR_9->cid_free);
  return VAR_2;
 }

 VAR_9->cid_array[VAR_9->cid_alloc++] = VAR_2;
 if (VAR_9->cid_alloc == FUNC_0(VAR_4, VAR_8))
  VAR_9->cid_alloc = 0;
 VAR_9->avlbl_cids--;
 return VAR_7;
}
