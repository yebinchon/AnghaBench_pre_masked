
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct hnae3_handle {int dummy; } ;
struct TYPE_3__ {int * mac_addr; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct hclgevf_dev {TYPE_2__ hw; } ;
typedef int msg_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 struct hclgevf_dev* FUNC_1 (struct hnae3_handle*) ;
 int FUNC_2 (struct hclgevf_dev*,int ,int ,int *,int,int,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct hnae3_handle *VAR_4, void *VAR_5,
    bool VAR_6)
{
 struct hclgevf_dev *VAR_7 = FUNC_1(VAR_4);
 u8 *VAR_8 = (u8 *)VAR_7->hw.mac.mac_addr;
 u8 *VAR_9 = (u8 *)VAR_5;
 u8 VAR_10[VAR_0 * 2];
 u16 VAR_11;
 int VAR_12;

 FUNC_0(VAR_10, VAR_9);
 FUNC_0(&VAR_10[VAR_0], VAR_8);

 VAR_11 = VAR_6 ? VAR_1 :
   VAR_2;

 VAR_12 = FUNC_2(VAR_7, VAR_3,
          VAR_11, VAR_10, sizeof(VAR_10),
          1, ((void*)0), 0);
 if (!VAR_12)
  FUNC_0(VAR_7->hw.mac.mac_addr, VAR_9);

 return VAR_12;
}
