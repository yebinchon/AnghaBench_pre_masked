
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct gb_hid_get_report_request {void* report_id; void* report_type; } ;
struct gb_hid {int bundle; int connection; } ;
typedef int request ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct gb_hid_get_report_request*,int,unsigned char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct gb_hid *VAR_1, u8 VAR_2, u8 VAR_3,
        unsigned char *VAR_4, int VAR_5)
{
 struct gb_hid_get_report_request VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_1->bundle);
 if (VAR_7)
  return VAR_7;

 VAR_6.report_type = VAR_2;
 VAR_6.report_id = VAR_3;

 VAR_7 = FUNC_0(VAR_1->connection, VAR_0,
    &VAR_6, sizeof(VAR_6), VAR_4, VAR_5);

 FUNC_2(VAR_1->bundle);

 return VAR_7;
}
