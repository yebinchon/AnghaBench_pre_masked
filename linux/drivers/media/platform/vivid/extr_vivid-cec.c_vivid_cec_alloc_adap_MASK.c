
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {char* name; } ;
struct vivid_dev {TYPE_2__ vid_cap_dev; TYPE_1__ vid_out_dev; } ;
struct cec_adapter {int dummy; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cec_adapter* FUNC_0 (int *,struct vivid_dev*,char*,int,int) ;
 int FUNC_1 (char*,int,char*,char*,unsigned int) ;
 int VAR_3 ;

struct cec_adapter *FUNC_2(struct vivid_dev *VAR_4,
      unsigned int VAR_5,
      bool VAR_6)
{
 char VAR_7[sizeof(VAR_4->vid_out_dev.name) + 2];
 u32 VAR_8 = VAR_0 | VAR_1 | VAR_2;

 FUNC_1(VAR_7, sizeof(VAR_7), "%s%d",
   VAR_6 ? VAR_4->vid_out_dev.name : VAR_4->vid_cap_dev.name,
   VAR_5);
 return FUNC_0(&VAR_3, VAR_4,
  VAR_7, VAR_8, 1);
}
