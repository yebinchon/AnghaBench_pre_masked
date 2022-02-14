
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fwnode_endpoint {int nr_of_link_frequencies; int * link_frequencies; int bus_type; } ;
struct imx319_hwcfg {scalar_t__ ext_clk; int nr_of_link_freqs; int * link_freqs; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,unsigned int,...) ;
 int FUNC_1 (struct device*,char*,...) ;
 struct fwnode_handle* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*) ;
 int * FUNC_4 (struct device*,int,int,int ) ;
 struct imx319_hwcfg* FUNC_5 (struct device*,int,int ) ;
 struct fwnode_handle* FUNC_6 (struct fwnode_handle*,int *) ;
 int FUNC_7 (struct fwnode_handle*) ;
 int FUNC_8 (struct fwnode_handle*,char*,scalar_t__*) ;
 int FUNC_9 (struct fwnode_handle*,struct v4l2_fwnode_endpoint*) ;
 int FUNC_10 (struct v4l2_fwnode_endpoint*) ;

__attribute__((used)) static struct imx319_hwcfg *FUNC_11(struct device *VAR_3)
{
 struct imx319_hwcfg *VAR_4;
 struct v4l2_fwnode_endpoint VAR_5 = {
  .bus_type = VAR_2
 };
 struct fwnode_handle *VAR_6;
 struct fwnode_handle *VAR_7 = FUNC_2(VAR_3);
 unsigned int VAR_8;
 int VAR_9;

 if (!VAR_7)
  return ((void*)0);

 VAR_6 = FUNC_6(VAR_7, ((void*)0));
 if (!VAR_6)
  return ((void*)0);

 VAR_9 = FUNC_9(VAR_6, &VAR_5);
 if (VAR_9)
  goto out_err;

 VAR_4 = FUNC_5(VAR_3, sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  goto out_err;

 VAR_9 = FUNC_8(FUNC_2(VAR_3), "clock-frequency",
           &VAR_4->ext_clk);
 if (VAR_9) {
  FUNC_1(VAR_3, "can't get clock frequency");
  goto out_err;
 }

 FUNC_0(VAR_3, "ext clk: %d", VAR_4->ext_clk);
 if (VAR_4->ext_clk != VAR_1) {
  FUNC_1(VAR_3, "external clock %d is not supported",
   VAR_4->ext_clk);
  goto out_err;
 }

 FUNC_0(VAR_3, "num of link freqs: %d", VAR_5.nr_of_link_frequencies);
 if (!VAR_5.nr_of_link_frequencies) {
  FUNC_3(VAR_3, "no link frequencies defined");
  goto out_err;
 }

 VAR_4->nr_of_link_freqs = VAR_5.nr_of_link_frequencies;
 VAR_4->link_freqs = FUNC_4(VAR_3,
           VAR_5.nr_of_link_frequencies + 1,
           sizeof(*VAR_4->link_freqs), VAR_0);
 if (!VAR_4->link_freqs)
  goto out_err;

 for (VAR_8 = 0; VAR_8 < VAR_5.nr_of_link_frequencies; VAR_8++) {
  VAR_4->link_freqs[VAR_8] = VAR_5.link_frequencies[VAR_8];
  FUNC_0(VAR_3, "link_freq[%d] = %lld", VAR_8, VAR_4->link_freqs[VAR_8]);
 }

 FUNC_10(&VAR_5);
 FUNC_7(VAR_6);
 return VAR_4;

out_err:
 FUNC_10(&VAR_5);
 FUNC_7(VAR_6);
 return ((void*)0);
}
