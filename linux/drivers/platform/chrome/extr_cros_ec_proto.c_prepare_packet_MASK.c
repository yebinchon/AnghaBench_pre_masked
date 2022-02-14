
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ec_host_request {int data_len; scalar_t__ checksum; scalar_t__ reserved; int command_version; int command; scalar_t__ struct_version; } ;
struct cros_ec_device {scalar_t__ proto_version; int dout_size; scalar_t__* dout; } ;
struct cros_ec_command {int outsize; scalar_t__* data; int version; int command; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_2(struct cros_ec_device *VAR_1,
     struct cros_ec_command *VAR_2)
{
 struct ec_host_request *VAR_3;
 u8 *VAR_4;
 int VAR_5;
 u8 VAR_6 = 0;

 FUNC_0(VAR_1->proto_version != VAR_0);
 FUNC_0(VAR_2->outsize + sizeof(*VAR_3) > VAR_1->dout_size);

 VAR_4 = VAR_1->dout;
 VAR_3 = (struct ec_host_request *)VAR_4;
 VAR_3->struct_version = VAR_0;
 VAR_3->checksum = 0;
 VAR_3->command = VAR_2->command;
 VAR_3->command_version = VAR_2->version;
 VAR_3->reserved = 0;
 VAR_3->data_len = VAR_2->outsize;

 for (VAR_5 = 0; VAR_5 < sizeof(*VAR_3); VAR_5++)
  VAR_6 += VAR_4[VAR_5];


 FUNC_1(VAR_4 + sizeof(*VAR_3), VAR_2->data, VAR_2->outsize);
 for (VAR_5 = 0; VAR_5 < VAR_2->outsize; VAR_5++)
  VAR_6 += VAR_2->data[VAR_5];

 VAR_3->checksum = -VAR_6;

 return sizeof(*VAR_3) + VAR_2->outsize;
}
