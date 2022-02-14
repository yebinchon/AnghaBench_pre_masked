
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netvsc_device_info {int recv_section_size; int recv_sections; int send_section_size; int send_sections; int num_chn; int rss_key; } ;
struct netvsc_device {TYPE_1__* extension; int recv_section_size; int recv_section_cnt; int send_section_size; int send_section_cnt; int num_chn; } ;
struct TYPE_2__ {int rss_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct netvsc_device_info* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static struct netvsc_device_info *FUNC_2
   (struct netvsc_device *VAR_7)
{
 struct netvsc_device_info *VAR_8;

 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_0);

 if (!VAR_8)
  return ((void*)0);

 if (VAR_7) {
  VAR_8->num_chn = VAR_7->num_chn;
  VAR_8->send_sections = VAR_7->send_section_cnt;
  VAR_8->send_section_size = VAR_7->send_section_size;
  VAR_8->recv_sections = VAR_7->recv_section_cnt;
  VAR_8->recv_section_size = VAR_7->recv_section_size;

  FUNC_1(VAR_8->rss_key, VAR_7->extension->rss_key,
         VAR_3);
 } else {
  VAR_8->num_chn = VAR_6;
  VAR_8->send_sections = VAR_2;
  VAR_8->send_section_size = VAR_5;
  VAR_8->recv_sections = VAR_1;
  VAR_8->recv_section_size = VAR_4;
 }

 return VAR_8;
}
