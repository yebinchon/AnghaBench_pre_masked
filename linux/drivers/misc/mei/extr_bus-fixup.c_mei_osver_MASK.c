
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int command; int group_id; } ;
struct mkhi_msg {scalar_t__ data; TYPE_1__ hdr; } ;
struct TYPE_4__ {int rule_type; int feature_id; } ;
struct mkhi_fwcaps {int len; scalar_t__ data; TYPE_2__ id; } ;
struct mei_os_ver {int os_type; } ;
struct mei_cl_device {int cl; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,size_t const,unsigned int) ;
 int FUNC_1 (char*,int ,size_t const) ;

__attribute__((used)) static int FUNC_2(struct mei_cl_device *VAR_7)
{
 const size_t VAR_8 = VAR_5;
 char VAR_9[VAR_5];
 struct mkhi_msg *VAR_10;
 struct mkhi_fwcaps *VAR_11;
 struct mei_os_ver *VAR_12;
 unsigned int VAR_13 = VAR_0 | VAR_1;

 FUNC_1(VAR_9, 0, VAR_8);

 VAR_10 = (struct mkhi_msg *)VAR_9;
 VAR_10->hdr.group_id = VAR_3;
 VAR_10->hdr.command = VAR_4;

 VAR_11 = (struct mkhi_fwcaps *)VAR_10->data;

 VAR_11->id.rule_type = 0x0;
 VAR_11->id.feature_id = VAR_2;
 VAR_11->len = sizeof(*VAR_12);
 VAR_12 = (struct mei_os_ver *)VAR_11->data;
 VAR_12->os_type = VAR_6;

 return FUNC_0(VAR_7->cl, VAR_9, VAR_8, VAR_13);
}
