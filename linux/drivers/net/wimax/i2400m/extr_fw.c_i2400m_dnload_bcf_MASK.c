
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2400m_bootrom_header {int target_addr; int data_size; } ;
struct i2400m_bcf_hdr {int header_len; } ;
struct i2400m {int fw_name; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef int ack ;


 size_t FUNC_0 (int,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct device*,char*,struct i2400m*,struct i2400m_bcf_hdr const*,size_t,int) ;
 int FUNC_3 (int,struct device*,char*,struct i2400m*,struct i2400m_bcf_hdr const*,size_t) ;
 int FUNC_4 (int,struct device*,char*,size_t,...) ;
 int FUNC_5 (struct device*,char*,int ,size_t,size_t,int,...) ;
 size_t FUNC_6 (struct i2400m*,struct i2400m_bootrom_header const*,size_t,struct i2400m_bootrom_header*,int,int ) ;
 scalar_t__ FUNC_7 (struct i2400m_bootrom_header const*) ;
 struct device* FUNC_8 (struct i2400m*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static
ssize_t FUNC_10(struct i2400m *VAR_4,
     const struct i2400m_bcf_hdr *VAR_5, size_t VAR_6)
{
 ssize_t VAR_7;
 struct device *VAR_8 = FUNC_8(VAR_4);
 size_t VAR_9,
  VAR_10,
  VAR_11,
  VAR_12 = 1;
 const struct i2400m_bootrom_header *VAR_13;
 struct i2400m_bootrom_header VAR_14;

 FUNC_3(3, VAR_8, "(i2400m %p bcf %p bcf_len %zu)\n",
    VAR_4, VAR_5, VAR_6);


 VAR_9 = FUNC_9(VAR_5->header_len) * sizeof(u32);
 while (1) {
  VAR_13 = (void *) VAR_5 + VAR_9;
  VAR_10 = FUNC_9(VAR_13->data_size);
  VAR_11 = FUNC_0(sizeof(*VAR_13) + VAR_10, 4);
  FUNC_4(7, VAR_8,
    "downloading section #%zu (@%zu %zu B) to 0x%08x\n",
    VAR_12, VAR_9, sizeof(*VAR_13) + VAR_10,
    FUNC_9(VAR_13->target_addr));






  if (FUNC_7(VAR_13) == VAR_3 ||
   FUNC_7(VAR_13) == VAR_2) {
   FUNC_4(5, VAR_8, "jump found @%zu\n", VAR_9);
   break;
  }
  if (VAR_9 + VAR_11 > VAR_6) {
   FUNC_5(VAR_8, "fw %s: bad section #%zu, "
    "end (@%zu) beyond EOF (@%zu)\n",
    VAR_4->fw_name, VAR_12,
    VAR_9 + VAR_11, VAR_6);
   VAR_7 = -VAR_0;
   goto error_section_beyond_eof;
  }
  FUNC_1(20);
  VAR_7 = FUNC_6(VAR_4, VAR_13, VAR_11,
        &VAR_14, sizeof(VAR_14), VAR_1);
  if (VAR_7 < 0) {
   FUNC_5(VAR_8, "fw %s: section #%zu (@%zu %zu B) "
    "failed %d\n", VAR_4->fw_name, VAR_12,
    VAR_9, sizeof(*VAR_13) + VAR_10, (int) VAR_7);
   goto error_send;
  }
  VAR_9 += VAR_11;
  VAR_12++;
 }
 VAR_7 = VAR_9;
error_section_beyond_eof:
error_send:
 FUNC_2(3, VAR_8, "(i2400m %p bcf %p bcf_len %zu) = %d\n",
  VAR_4, VAR_5, VAR_6, (int) VAR_7);
 return VAR_7;
}
