
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_bootrom_header {int block_checksum; int data_size; int target_addr; } ;
struct i2400m {scalar_t__ boot_mode; scalar_t__ (* bus_bm_cmd_send ) (struct i2400m*,struct i2400m_bootrom_header const*,size_t,int) ;scalar_t__ (* bus_bm_wait_for_ack ) (struct i2400m*,struct i2400m_bootrom_header*,size_t) ;} ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct i2400m*,int,struct i2400m_bootrom_header*,size_t,int) ;
 int FUNC_2 (int,struct device*,char*,struct i2400m*,struct i2400m_bootrom_header const*,size_t,struct i2400m_bootrom_header*,size_t,int) ;
 int FUNC_3 (int,struct device*,char*,struct i2400m*,struct i2400m_bootrom_header const*,size_t,struct i2400m_bootrom_header*,size_t) ;
 int FUNC_4 (int,struct device*,char*,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct device*,char*,int,int) ;
 int FUNC_6 (struct i2400m_bootrom_header const*) ;
 int FUNC_7 (struct i2400m_bootrom_header const*) ;
 int FUNC_8 (struct i2400m_bootrom_header const*) ;
 int FUNC_9 (struct i2400m_bootrom_header const*) ;
 struct device* FUNC_10 (struct i2400m*) ;
 scalar_t__ FUNC_11 (struct i2400m*,struct i2400m_bootrom_header const*,size_t,int) ;
 scalar_t__ FUNC_12 (struct i2400m*,struct i2400m_bootrom_header*,size_t) ;

__attribute__((used)) static
ssize_t FUNC_13(struct i2400m *VAR_2,
        const struct i2400m_bootrom_header *VAR_3, size_t VAR_4,
        struct i2400m_bootrom_header *VAR_5, size_t VAR_6,
        int VAR_7)
{
 ssize_t VAR_8 = -VAR_0, VAR_9;
 struct device *VAR_10 = FUNC_10(VAR_2);
 int VAR_11 = VAR_3 == ((void*)0) ? -1 : FUNC_7(VAR_3);

 FUNC_3(6, VAR_10, "(i2400m %p cmd %p size %zu ack %p size %zu)\n",
    VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_0(VAR_6 < sizeof(*VAR_5));
 FUNC_0(VAR_2->boot_mode == 0);

 if (VAR_3 != ((void*)0)) {
  VAR_8 = VAR_2->bus_bm_cmd_send(VAR_2, VAR_3, VAR_4, VAR_7);
  if (VAR_8 < 0)
   goto error_cmd_send;
  if ((VAR_7 & VAR_1) == 0)
   FUNC_4(5, VAR_10,
     "boot-mode cmd %d csum %u rr %u da %u: "
     "addr 0x%04x size %u block csum 0x%04x\n",
     VAR_11, FUNC_9(VAR_3),
     FUNC_8(VAR_3),
     FUNC_6(VAR_3),
     VAR_3->target_addr, VAR_3->data_size,
     VAR_3->block_checksum);
 }
 VAR_8 = VAR_2->bus_bm_wait_for_ack(VAR_2, VAR_5, VAR_6);
 if (VAR_8 < 0) {
  FUNC_5(VAR_10, "boot-mode cmd %d: error waiting for an ack: %d\n",
   VAR_11, (int) VAR_8);
  goto error_wait_for_ack;
 }
 VAR_9 = VAR_8;


 VAR_8 = FUNC_1(VAR_2, VAR_11, VAR_5, VAR_6, VAR_7);
 if (VAR_8 < 0)
  goto error_bad_ack;



 VAR_8 = VAR_9;
error_bad_ack:
error_wait_for_ack:
error_cmd_send:
 FUNC_2(6, VAR_10, "(i2400m %p cmd %p size %zu ack %p size %zu) = %d\n",
  VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, (int) VAR_8);
 return VAR_8;
}
